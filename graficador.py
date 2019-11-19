import numpy as np
import matplotlib.pylab as plt

datos=np.loadtxt("datos.dat")

t=datos[:,0]
x=datos[:,1]
v=datos[:,2]

plt.figure()
plt.subplot(1,2,1)
plt.plot(t,x)
plt.subplot(1,2,2)
plt.plot(x,v)
plt.savefig("euler.png")



datos2=np.loadtxt("datos2.dat")

t2=datos2[:,0]
x2=datos2[:,1]
v2=datos2[:,2]

plt.figure()
plt.subplot(1,2,1)
plt.plot(t2,x2)
plt.subplot(1,2,2)
plt.plot(x2,v2)
plt.savefig("RK4.png")