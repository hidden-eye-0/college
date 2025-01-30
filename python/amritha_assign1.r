cat("Enter your steps: ")
step <- as.numeric(unlist(strsplit(readline(), " ")))
days <- c("Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday")

avg_steps <- mean(step)
cat("Average steps:", round(avg_steps, 2), "\n")

max_steps <- max(step)
max_day <- days[which.max(step)]
cat("The highest number of steps was on", max_day, "with", max_steps, "steps.\n")

tot_steps <- sum(step)
steps_need <- 70000 - tot_steps

if (steps_need > 0) {
  cat("You need", steps_need, "more steps to reach the goal.\n")
} else {
  cat("You've reached your goal with a total of", tot_steps, "steps.\n")
}
