Action()
{
	
	web_url("index.do", 
		"URL=https://amtrakuat.e-invoice.com/Passport/index.do", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	
	return 0;
}
