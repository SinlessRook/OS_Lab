# // Algorithm

# // 1. 
# // 2. 
# // 3. 


# // Code

words=()
for word in $(cat f); do
    if [[ $word == a* || $word == A* ]]; then # Check if the word starts with 'a'
        words+=("$word") 
    fi
done
for word in "${words[@]}"; do
    echo "$word"
done | sort | uniq

# # // Output
# $ touch f
# $ nano f (write onto f)
# $ chmod +x ./sample.sh
# $ bash sample.sh
# Airplane
# Avocado
# apple
# apricot