#!/bin/python

from numpy import *
import matplotlib.pyplot as plt

infile = open('1.csv','r')

xline=infile.readline()
xs=xline.split()
x=[float(char) for char in xs]

yline=infile.readline()
ys=yline.split()
y=[float(char) for char in ys]

infile.close()

infile=open('out', 'r')

t=linspace(x[0], x[len(x)-1])
param=[float(char) for char in infile]
f=param[0]*t+param[1]

infile.close()

plt.grid(True)
plt.plot(x,y, "ro",
         t,f, "b-")
plt.xlabel('x')
plt.ylabel('y')
plt.show()
