// Stop gninnipS My sdroW!

function spinWords(str){
    let words = str.split(' ');
    let newArr = [];
    
    for (let word of words) {
      if (word.length >= 5) {
        let charArr = [...word];
        word = charArr.reverse().join('');
        newArr.push(word);
      }
      else {
        newArr.push(word);
      }
    }
    return newArr.join(' ');
}