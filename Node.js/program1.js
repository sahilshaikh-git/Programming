function addNumbers(a, b) {
	return a + b;
}

const [first, second] = process.argv.slice(2).map(Number);

if (Number.isFinite(first) && Number.isFinite(second)) {
	console.log(addNumbers(first, second));
} else {
	console.log('Usage: node program1.js <number1> <number2>');
}
