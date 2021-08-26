import pandas as pd
a = [[1,2,3,],[5,6,7],[7,2,13],[5,3,19],[5,3,12],[5,6,11],[5,6,13],[5,3,4]]
df=pd.DataFrame(data=a)
cr=df.corr()
print(cr)

