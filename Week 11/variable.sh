x=42             
name="Alice"
echo $x            # Prints: 42
echo "Hello $name"  # Prints: Hello Alice
echo 'Hello $name'  # Prints literally: Hello $name


date_today=$(date)   # Store command output in a variable
echo "$date_today"