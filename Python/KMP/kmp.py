def prefix(pattern):
  m = len(pattern)
  failure = [0] * m
  j = 0

  for i in range(1, m):
    while j > 0 and pattern[i] != pattern[j]:
      j = failure[j - 1]
    if pattern[i] == pattern[j]:
      j += 1
    failure[i] = j
  return failure

def kmp_search(text, pattern):
  n = len(text)
  m = len(pattern)
  failure = prefix(pattern)
  i, j = 0, 0

  while i < n:
    if pattern[j] == text[i]:
      if j == m - 1:
        return i - j  # Pola ditemukan, mengembalikan indeks awal
      i += 1
      j += 1
    elif j > 0:
      j = failure[j - 1]
    else:
      i += 1

  return -1  # Pola tidak ditemukan

# Contoh penggunaan:

text = input("masukkan string: ")
pattern = input("masukkan pattern: ")
result = kmp_search(text, pattern)

if result != -1:
  print("Pola ditemukan pada indeks:", result)
else:
  print("Pola tidak ditemukan.")

n = len(text)
m = len(pattern)

print("O(",n+m,")")