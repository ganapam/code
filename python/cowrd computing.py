from statistics  import mean
from scipy import stats
a=[100,120,150,150,150,170,175,180,197,200,200,200,200,200,200,220,220,220,220,234,250,250,250,250,250,250,250,250,250,263,270,275,286,300,300,300,300,300,300,300,300,300,300,320,350,350,350,400,400,400,400,400,450,467,500,500,500,500,500,500,500,550,550,600,600,600,650,700,700,720,1000,1010,1500,1786,2000]
a.sort()
b=stats.trim_mean(a,0.1)
print(b)
