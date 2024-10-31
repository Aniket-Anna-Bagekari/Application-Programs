let url1 = "https://catfact.ninja/fact";

fetch(url1)
.then(function(response) { 
                                        
    return response.json();
})
.then(function(data) {

    console.log("1", data.fact);
    return fetch(url1);
})
.then(function(response) {

    return response.json();
})
.then(function(data) {

    console.log("2", data.fact);
})
.catch(function(error) { 

    console.log(error); 
});