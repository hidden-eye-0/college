import matplotlib.pyplot as plt
import seaborn as sns

# Time-Series Plot of Predicted vs. Actual Cycles
plt.figure(figsize=(14, 7))
plt.plot(y_test_actual, label="Actual Market Phase")
plt.plot(test_predict, label="Predicted Market Phase", linestyle="--")  # Changed to plot the 1D array directly
plt.xlabel("Time")
plt.ylabel("Market Cycle")
plt.title("Predicted vs Actual Stock Market Cycles")
plt.legend()
plt.show()

# Feature Importance Over Time
feature_weights = model.layers[0].get_weights()[0]  # Access the weights of the first LSTM layer (index 0)
# Calculate the average importance across all hidden units for each feature
feature_importance = np.mean(feature_weights, axis=1)  # Change axis to 1 to average across hidden units

plt.figure(figsize=(10, 6))
# Now feature_importance has shape (4,) matching the length of x
sns.barplot(x=['P/E', 'D/E', 'P/B', 'Current Ratio'], y=feature_importance)
plt.xlabel("Financial Ratios")
plt.ylabel("Importance")
plt.title("Feature Importance Analysis")
plt.show()

# Error Analysis Graphs
plt.figure(figsize=(10, 6))
sns.lineplot(data={'RMSE': [rmse], 'MAPE': [mape]})
plt.title("Error Analysis Over Testing Period")
plt.ylabel("Error Metrics")
plt.xlabel("Metric")
plt.show()