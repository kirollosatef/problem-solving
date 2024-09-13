// Check If One String Is Rotation Of Another String

const isRotation = (s1, s2) => {
  if (s1.length !== s2.length) {
    return false;
  }
  return (s1 + s1).includes(s2);
}

const isRotationWithoutIncludes = (s1, s2) => {
  if (s1.length !== s2.length) {
    return false;
  }
  let i = 0;
  let j = 0;
  while (i < s1.length && j < s2.length) {
    if (s1[i] === s2[j]) {
      i++;
      j++;
    } else {
      i = i - j + 1;
      j = 0;
    }
  }
  return j === s2.length;
}

const isRotationUsingFind = (s1, s2) => {
  if (s1.length !== s2.length) {
    return false;
  } 
  return s1.repeat(2).indexOf(s2) !== -1;
}