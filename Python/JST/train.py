import numpy as np

# Load hasil pelatihan dari file TResult.npy
# TResult.npy berisi: W1, W2, MSE, JHneuron, JOneuron, LR
t_result = np.load('C:/Project/Project Programming/python/src/05 - JST/TResult.npy', allow_pickle=True).item()
W1 = t_result['W1']
W2 = t_result['W2']

TestSet = np.array([
    [3, 3, 1],
    [3, 1, 2],
    [2, 3, 1],
    [2, 1, 2],
    [1, 3, 1],
    [1, 2, 2],
    [1, 1, 1]
])

TestKelas = np.array([0, 1, 0, 1, 0, 1, 0])

JumPola = TestSet.shape[0]
JumBenar = 0

for pp in range(JumPola):
    CP = TestSet[pp, :]
    A1 = np.zeros(t_result['JHneuron'])
    
    for ii in range(t_result['JHneuron']):
        v = np.dot(CP, W1[:, ii])
        A1[ii] = 1 / (1 + np.exp(-v))
    
    A2 = np.zeros(t_result['JOneuron'])
    
    for jj in range(t_result['JOneuron']):
        v = np.dot(A1, W2[:, jj])
        A2[jj] = 1 / (1 + np.exp(-v))
    
    Kelas = 0 if A2[0] < 0.5 else 1
    
    if Kelas == TestKelas[pp]:
        JumBenar += 1

akurasi = (JumBenar / JumPola) * 100
print(f'Akurasi JST = {akurasi:.2f}%')
