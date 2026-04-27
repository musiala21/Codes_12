def iterate_all(s):
   for fruits in s:
      print(fruits)
def remove_element(s):
   user_data=input("enter the element you want to remove from the set:")
   s.remove(user_data)
   print("the element has been removed")
   print(s)
s1=set(input("enter the set values").split())
print("the length of the set is",len(s1))
iterate_all(s1)
remove_element(s1)
