let url2 = "https://catfact.ninja/fact";

async function GETfetch() {

    let res = await fetch(url2);
    let data = await res.json();
    console.log(data.fact);
}

GETfetch();