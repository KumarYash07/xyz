function validation() {
    let x = document.getElementById("fname").value;
    let text;

    if (x.trim() === "") { // Check for empty input
        text = "Input cannot be empty";
    } else if (isNaN(x)) { // Check if it's a number
        text = "Input must be a number";
    } else {
        let numX = Number(x); // Convert to a number AFTER checking if it's a number
        if (numX < 1 || numX > 10) {
            text = "Input must be between 1 and 10";
        } else {
            text = "Accepted";
        }
    }

    document.getElementById("demo").innerHTML = text;
}