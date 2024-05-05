import numpy as np
import matplotlib.pyplot as plt

np.random.seed(0)  # Untuk hasil yang konsisten

def sigmoid(x):
    return 1 / (1 + np.exp(-x))

def mean_squared_error(targets, predictions):
    return np.mean((targets - predictions) ** 2)

P = np.array([
    [3, 3, 2],
    [3, 2, 2],
    [3, 2, 1],
    [3, 1, 1],
    [2, 3, 2],
    [2, 2, 2],
    [2, 2, 1],
    [2, 1, 1],
    [1, 3, 2],
    [1, 2, 1],
    [1, 1, 2]
])

T = np.array([
    [1],
    [1],
    [1],
    [0],
    [1],
    [1],
    [1],
    [0],
    [1],
    [0],
    [1]
])

JumPola = P.shape[0]
DimPola = P.shape[1]
JOneuron = T.shape[1]

JHNeuron = 2
LR = 0.1
Epoch = 5000
MaxMSE = 1e-5

W1 = 2 * np.random.rand(JHNeuron, DimPola) - 1
W2 = 2 * np.random.rand(JOneuron, JHNeuron) - 1

MSEepoch = MaxMSE + 1
MSE = []
ee = 1

while ee <= Epoch and MSEepoch > MaxMSE:
    MSEepoch = 0
    for pp in range(JumPola):
        CP = P[pp, :]
        CT = T[pp, :]
        
        A1 = sigmoid(CP.dot(W1.T))
        A2 = sigmoid(A1.dot(W2.T))
        
        Error = CT - A2
        MSEepoch += np.sum(Error**2)
        
        D2 = A2 * (1 - A2) * Error
        
        dW2 = LR * np.outer(D2, A1)
        
        D1 = A1 * (1 - A1) * D2.dot(W2)
        
        dW1 = LR * np.outer(D1, CP)
        
        W1 += dW1
        W2 += dW2
    
    MSE.append(MSEepoch / JumPola)
    ee += 1

print("MSE at epoch 5000:", MSE[-1])

plt.plot(MSE)
plt.xlabel('Epoch')
plt.ylabel('MSE')
plt.show()

t_result = {
    'W1': W1,
    'W2': W2,
    'MSE': MSE,
    'JHneuron': JHNeuron,
    'JOneuron': JOneuron,
    'LR': LR
}

np.save('TResult.npy', t_result)