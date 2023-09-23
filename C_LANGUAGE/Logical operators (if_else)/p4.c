/*
Compute taxes for a given income with tax slab rates as follows...

a. slab 1... 0-2500: 0%

b. slab 2. 2500-5000; 10%

c. slab 3. 5000-10000: 20%

d. slab 4 10000+ 30%

(for each range of a given income, the tax rate is different) a.g. input x 5200 divisions are 0-2500 2500-5000 5000-5200 calculation 0-2500 of x: 01% of 2500 = 0 2500-5000 of x 10% of 2500 250 5000-1000 of x 20% of 200 40 output 290 */