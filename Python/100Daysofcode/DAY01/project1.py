import tkinter as tk

# 1. Define the function that runs when clicked
def on_run_click():
    # This changes the label text when the button is pressed
    status_label.config(text="Status: Running...", fg="green")
    print("Run button clicked successfully!")

# 2. Setup the main window
root = tk.Tk()
root.title("Clickable Button Example")
root.geometry("400x200")

# 3. Add a label to show the status
status_label = tk.Label(root, text="Status: Idle", font=("Arial", 14))
status_label.pack(pady=20)

# 4. Create the clickable RUN button
# The 'command' parameter links the click event to your function
run_button = tk.Button(
    root, 
    text="RUN", 
    command=on_run_click,  # <-- Crucial line: do NOT use parentheses () here
    font=("Arial", 12, "bold"),
    bg="#4CAF50",          # Green background
    fg="white",            # White text
    padx=20,               # Horizontal padding inside button
    pady=10                # Vertical padding inside button
)
run_button.pack(pady=10)

# 5. Start the application
root.mainloop()
