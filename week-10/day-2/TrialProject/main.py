import matplotlib.pyplot as plt
import matplotlib.style as style
import pandas as pd
import numpy as np

df = pd.read_csv('Popular_Baby_Names.csv')
#print(df.head(10))

name_for_search = 'Robert'

dic = {
    2011: 0,
    2012: 0,
    2013: 0,
    2014: 0,
    2015: 0,
    2016: 0,
}

df_maria = df[df["Child's First Name"] == name_for_search]
print(df_maria)
#plt.scatter(df_maria['Year of Birth'], df_maria['Count'])
#plt.show()
for tuples in df_maria.itertuples():
    print(tuples)
    if tuples[1] == 2011:
        dic[2011] += tuples[5]
    if tuples[1] == 2012:
        dic[2012] += tuples[5]
    if tuples[1] == 2013:
        dic[2013] += tuples[5]
    if tuples[1] == 2014:
        dic[2014] += tuples[5]
    if tuples[1] == 2015:
        dic[2015] += tuples[5]
    if tuples[1] == 2016:
        dic[2016] += tuples[5]

print(dic)
final_data = sorted(dic.items())
x, y = zip(*final_data)
plt.bar(x, y)
plt.title('Frequency between 2011 - 2016')
plt.ylabel('frequency')
plt.xlabel('years')
plt.show()
