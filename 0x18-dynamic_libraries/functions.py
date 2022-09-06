from ctypes import *
c_file = "/0x18-dynamic_libraries/100-operations.so"
operation = CDLL(c_file)

print(type(operation))
print(operation.add(2,4))
print(operation.sub(2,4))
print(operation.mul(2,4))
print(operation.div(2,4))
print(operation.mod(2,4))

print("Done")
