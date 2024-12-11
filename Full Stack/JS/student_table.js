const studentArr=[{name:"Sumit",City:"Agra",CGPA:9.0},
                   {name:"Ritika",City:"Delhi",CGPA:8.4},
                   {name:"Prateek",City:"Mumbai",CGPA:5.0},
                   {name:"Rahul",City:"Ghaziabad",CGPA:8.5} ]
console.table(studentArr)                   

// Extract the CGPA values from the array
const cgpaValues = studentArr.map(student => student.CGPA);

// Find the maximum CGPA using Math.max
const maxCGPA = Math.max(...cgpaValues);

console.log("Max CGPA:", maxCGPA);

for(let i=0;i<4;i++){
    if(studentArr[i].City=="Mumbai"){
        console.log(studentArr[i]);
    }
    else if(studentArr[i].CGPA>8.4){
        console.log(studentArr[i]);
    }
}