#Scott Snow
#!/bin/bash
i=1
size=256
if [ -f ./results.out ]
then
	rm results.out
fi
touch results.out
echo "Algorithm   Array size    FLOPS" >> results2.out
for i in 1 2
do
for size in {256..2048..256}
do
./matrix_math $i $size 2>&1 | tee temp.out

perl -ni -e 'print unless $. <= 3' temp.out

flops=$(awk '{last=match($0,"....E+..")
		s=substr($0,last)
		print s}' temp.out)
echo -e "    " $i "       " $size " \t" $flops >> results.out

rm temp.out
done
done
