// let v = "         Sudarshan Sinha         ";
// console.log(v.length)
// let r = v.trim()
// let f = "39"
// // console.log(r.length)
// // console.log(r)
// // console.log(typeof f)
// // console.log(r.slice(0,2))
// // console.log(typeof Number(f))
// let aboutMe = `safe is ${r}`
// console.log(aboutMe) 
// // let a =  +prompt()
// // console.log(typeof a);
// // http://phc.prontonetworks.com/cgi-bin/authlogin?URI=http://edge.microsoft.com/captiveportal/generate_204

const date1 = new Date('7/13/2010');
const date2 = new Date('12/15/2010');
const diffTime = Math.abs(date2 - date1);
const diffDays = Math.ceil(diffTime / (1000 * 60 * 60 * 24)); 
console.log(diffTime + " milliseconds");
console.log(diffDays + " days");