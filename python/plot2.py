import numpy as np
import pandas as pd
from sklearn.metrics import accuracy_score, precision_score, recall_score, f1_score

# Generate synthetic financial ratio data for demonstration
np.random.seed(0)
df = pd.DataFrame({
    'P/E': np.random.uniform(10, 20, 100),
    'D/E': np.random.uniform(0.1, 1.5, 100),
    'P/B': np.random.uniform(1, 3, 100),
    'Current Ratio': np.random.uniform(0.5, 2, 100)
})

# Adding synthetic market cycle information
df['Market Cycle'] = np.where(df['P/E'] > 15, 'Bull',
                              np.where(df['P/E'] < 12, 'Bear', 'Stable'))

# Table 1: Summary Statistics for Financial Ratios by Market Cycle
summary_stats = df.groupby('Market Cycle').agg({
    'P/E': ['mean', 'std', 'min', 'max'],
    'D/E': ['mean', 'std', 'min', 'max'],
    'P/B': ['mean', 'std', 'min', 'max'],
    'Current Ratio': ['mean', 'std', 'min', 'max']
}).round(2)

# Generate mock labels and predictions for Table 2
# Replace y_true and y_pred with actual model predictions if available
y_true = np.random.choice(['Bull', 'Bear', 'Stable'], size=80)
y_pred = np.random.choice(['Bull', 'Bear', 'Stable'], size=80)

# Table 2: Predictive Performance Metrics
accuracy = accuracy_score(y_true, y_pred)
precision = precision_score(y_true, y_pred, average='weighted')
recall = recall_score(y_true, y_pred, average='weighted')
f1 = f1_score(y_true, y_pred, average='weighted')

performance_metrics = pd.DataFrame({
    "Metric": ["Accuracy", "Precision", "Recall", "F1-Score"],
    "Score": [accuracy, precision, recall, f1]
}).round(3)

# Table 3: Case Studies of Market Phases Showing Shifts in Ratio Importance
case_study_data = {
    "Market Phase": ["Bull", "Bear", "Stable"],
    "P/E Importance": [0.4, 0.2, 0.3],
    "D/E Importance": [0.1, 0.3, 0.2],
    "P/B Importance": [0.3, 0.2, 0.25],
    "Current Ratio Importance": [0.2, 0.3, 0.25]
}

case_study_df = pd.DataFrame(case_study_data)

# Print all tables
print("\nTable 1: Summary Statistics for Financial Ratios by Market Cycle")
print(summary_stats)

print("\nTable 2: Predictive Performance Metrics")
print(performance_metrics)

print("\nTable 3: Case Studies of Market Phases Showing Shifts in Ratio Importance")
print(case_study_df)
