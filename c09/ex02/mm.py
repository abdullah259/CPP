def is_sorted(numbers):
    return all(numbers[i] <= numbers[i+1] for i in range(len(numbers)-1))

def main():
    file_path = 'numbers.txt'
    with open(file_path, 'r') as file:
        numbers = [int(line.strip()) for line in file]

    result = is_sorted(numbers)
    print(result)

if __name__ == "__main__":
    main()
