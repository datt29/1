#To display files and directories

for item in *
do
	
	if [ -f $item ]
		then
			find /home/divydatt/cpp -name "*.cpp"| cut -d "/" -f 5  | uniq>d.txt
		
	fi

done
cat d.txt
