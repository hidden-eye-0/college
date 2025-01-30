cat("Enter the num: ")
n <- as.integer(readline())
reg <- character(n)
name <- character(n)
scores <- numeric(n)

for (i in 1:n) {
  cat("Enter reg no, name, score:", i, ": ")
  input <- unlist(strsplit(readline(), " "))
  reg[i] <- input[1]
  name[i] <- input[2]
  scores[i] <- as.numeric(input[3])
}

class_avg <- mean(scores)
cat("Class Average Score:", round(class_avg, 2), "\n")
high_score <- max(scores)
high_index <- which.max(scores)
cat("Highest Score:", high_score, "achieved by", name[high_index], "(Register No:", reg[high_index], ")\n")
low_score <- min(scores)
low_index <- which.min(scores)
cat("Lowest Score:", low_score, "achieved by", name[low_index], "(Register No:", reg[low_index], ")\n")