echo "the name of all file has permissions:"
read file1
if [ -r $file1 ] && [ -r $file1 ] && [ -r $file1 ]
then
   echo "file has permission"
else
   echo "file has no permission"
fi
