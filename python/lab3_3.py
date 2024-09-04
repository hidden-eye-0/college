import pandas as pd

df = pd.read_csv("ToothGrowth.csv")

med = df['len'].median()
sd = df['len'].std()
q1 = df['len'].quantile(0.25)
q2 = df['len'].quantile(0.50)
q3 = df['len'].quantile(0.75)

print("Median: {}".format(med))
print("Standard Deviation: {}".format(sd))
print("Q1: {}".format(q1))
print("Q2: {}".format(q2))
print("Q3: {}".format(q3))

gp = df.groupby('supp')['len']
print("Mean of Supplements: {}".format(gp.mean()))
print("Median of supplements: {}".format(gp.median()))
print("Standard Deviation: {}".format(gp.std()))

print("Supplement with highest average: {}".format((gp.mean()).idxmax()))

