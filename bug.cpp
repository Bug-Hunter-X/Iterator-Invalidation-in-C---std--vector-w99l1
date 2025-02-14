std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}

for (int i = 0; i < vec.size(); ++i) { 
  // Accessing elements using vec[i]
  if (vec[i] == 5) { 
    vec.erase(vec.begin() + i); 
  } 
}

//The above code is intended to remove the element 5 from vector. However, this approach may lead to unexpected behavior due to incorrect iterator invalidation.