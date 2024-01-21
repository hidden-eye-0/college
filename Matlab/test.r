#assigning a variable
x=5
y=6
x+y

#assigning a vector
x = c(1, 2, 3)
y = c(4, 3, 6)
x+y

#plotting a graph
plot(1:10)
x = seq(0, 1, 0.05) #generagting sequence with step => like python range()
plot(x, sin(x), col = "green", type = "l")

#Tabular column
id = 1:5
marks = c(12, 35, 56, 75, 23)
sex = c(0, 0, 1, 0, 0)
data = data.frame(id, marks, sex)
data
data$sex #print sex alone

#replacing the contents of the column in a table
data$sex = factor(data$sex, labels = c("M", "F"))
data

#typecasting
class(marks)
y = as.integer(y)
y
class(y)

mean(marks) #find avg
summary(data) #find summary
table(data) #find frequency