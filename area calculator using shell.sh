echo "enter the radius of circle:"
read r
pi=3.14159
area=$(echo "$pi*$r*$r" | bc)
circum=$(echo "2*$pi*$r" | bc)
echo " area of circle: $area"
echo " circumference of circle: $circum"
