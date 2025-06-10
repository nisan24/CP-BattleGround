void main() {
  // ✅ Simple Print Statement
  print("Hello, Dart!");

  // ✅ String variable
  var name = "Dart Developer";
  print("Welcome, $name!");

  // ✅ Integer variable
  var age = 30;
  print("Your age is $age years.");

  // ✅ Boolean variable
  var isActive = true;
  print("Is active: $isActive");

  // ✅ List (array)
  var numbers = [1, 2, 3, 4, 5];
  print("Numbers: $numbers");

  // ✅ Map (like dictionary/object)
  var person = {'name': 'John Doe', 'age': 25, 'isActive': true};
  print("Person: $person");

  // ✅ Null value
  var nullValue = null;
  print("Null value: $nullValue");

  // ✅ Dynamic variable (can change type later)
  var dynamicValue = "I can change type";
  print("Dynamic value: $dynamicValue");
  dynamicValue = 42; // Now it's an int
  print("Dynamic value changed: $dynamicValue");

  // ✅ Typed list
  var list = <String>['apple', 'banana', 'cherry'];
  print("List of fruits: $list");

  // ✅ Set (unique values only)
  var set = <int>{1, 2, 3, 4, 5};
  print("Set of numbers: $set");

  // ✅ Map with defined key-value types
  var map = <String, String>{'name': 'Alice', 'city': 'Wonderland'};
  print("Map of person: $map");

  // ✅ Arrow Function (Lambda)
  var isEven = (int number) => number % 2 == 0;
  print("Is 4 even? ${isEven(4)}");

  // ✅ Arrow Function for greeting
  var greet = (String name) => "Hello, $name!";
  print(greet("Dart User"));

  // ✅ Map operation (like array map in JS)
  var numbersList = [1, 2, 3, 4, 5];
  var doubled = numbersList.map((n) => n * 2).toList();
  print("Doubled numbers: $doubled");

  // ✅ Filter using where
  var filtered = numbersList.where((n) => n > 2).toList();
  print("Filtered numbers (greater than 2): $filtered");

  // ✅ Reduce to calculate sum
  var sum = numbersList.reduce((a, b) => a + b);
  print("Sum of numbers: $sum");

  // ✅ Nested Map with List
  var personInfo = {
    'name': 'Bob',
    'age': 28,
    'skills': ['Dart', 'Flutter']
  };
  print("Person Info: $personInfo");

  // ✅ Working with JSON-like structure
  var personJson = '{"name": "Alice", "age": 30}'; // Just a String
  var personMap = {'name': 'Alice', 'age': 30}; // Actual Map
  print("Person Map: $personMap");

  var personFromJson = {'name': 'Alice', 'age': 30};
  print("Person from JSON: $personFromJson");

  var personToJson = {'name': 'Alice', 'age': 30};
  print("Person to JSON: $personToJson");
}

// ✅ Function with parameters
String greetUser(String name, int age) {
  return "Hello, $name! You are $age years old.";
}
// ✅ Function with optional parameters
String greetUserOptional(String name, [int? age]) {
  if (age != null) {
    return "Hello, $name! You are $age years old.";
  } else {
    return "Hello, $name!";
  }
}
// ✅ Function with named parameters
String greetUserNamed({required String name, int? age}) {
  if (age != null) {
    return "Hello, $name! You are $age years old.";
  } else {
    return "Hello, $name!";
  }
}
// ✅ Function with default parameters
String greetUserDefault({String name = "Guest", int age = 18}) {
  return "Hello, $name! You are $age years old.";
}
// ✅ Function with return type
String add(int a, int b) {
  return "The sum of $a and $b is ${a + b}.";
}
// ✅ Function with void return type
void printMessage(String message) {
  print("Message: $message");
}
// ✅ Function with dynamic return type
dynamic getValue() {
  return "This can be anything!";
}
// ✅ Function with type inference
void printList(List<String> items) {
  for (var item in items) {
    print("Item: $item");
  }
}
// ✅ Function with generic type
T genericFunction<T>(T value) {
  return value;
}
// ✅ Function with async and await
Future<String> fetchData() async {
  await Future.delayed(Duration(seconds: 2)); // Simulate network delay
  return "Data fetched successfully!";
}

