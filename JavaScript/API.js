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

/////////////////////////////////////////////////////////////////////
// fetch() with async function


let url2 = "https://catfact.ninja/fact";

async function GETfetch() {

    let res = await fetch(url2);
    let data = await res.json();
    console.log(data.fact);
}

GETfetch();