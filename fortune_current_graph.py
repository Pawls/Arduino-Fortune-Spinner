import matplotlib.pyplot as plt

x1 = [1, 2, 3, 4, 5]
y1 = [236.40, 238.10, 236.70, 236.20, 245.30]
x2 = [1, 2, 3, 5, 5]
y2 = [336.00, 352.90, 384.20, 370.00, 370.30]
x3 = [1, 2, 3, 4, 5]
y3 = [497.10, 491.10, 490.10, 501.50, 467.60]
plt.title('Current differences based on using different touch methods')

plt.plot(x1,y1, label = 'Idle')
plt.plot(x2,y2, label = 'Finger')
plt.plot(x3,y3, label = 'Hand')
plt.xlabel('Trial Number')
plt.ylabel('Current mA')
plt.legend()
plt.grid(True, linestyle=':')
plt.show()


