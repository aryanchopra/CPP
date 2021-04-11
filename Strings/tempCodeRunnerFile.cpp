nt k;
	if (p[n] == 1)
		k = 1;
	else
		k = printSolution (p, p[n]-1) + 1;
	cout<<"Line number "<<k<<": From word no. "<<p[n]<<" to "<<n<<endl;
	return k;