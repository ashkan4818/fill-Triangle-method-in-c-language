 void drawFillTriangle(double x0, double y0,double x1, double y1, double x2, double y2, uint16_t color) {


	  //  drawFillTriangle  (90, 80 , 10, 140,128,140,WHITE);
	  //                                   x0  y0    x1    y1   x2   y2

	  double slope_A = (x1 - x0) / (y1 - y0);
	  double slope_C = (x2 - x0) / (y2 - y0);
	  double slope_B = (x2 - x1) / (y2 - y1);
		
	  double m_B =  (y2 - y1)/ (x2 - x1);

	  //float invslope3 = (x2 - x0) / (y2 - y0);
	  float strt_a = x0;
	  float strt_c = x0;
	 // float curx3 = x0;
	  
	  float end_c=x2;
	  float end_b=x2;
	  
	  float end_a=x1;
	  float start_b=x1;
	  
	  int scanlineY;

	  if(y1>y2){
	  for ( scanlineY = y0; scanlineY <=y2; scanlineY++)
	  {
		  
		  Line(strt_a,scanlineY, strt_c, scanlineY,color);
		//  Line(curx1,scanlineY, curx2, scanlineY,color);

		  strt_a += slope_A;
		  strt_c += slope_C;
	  }
	  }
	  
	  
	  	  if(y1<y2){
		  	  for ( scanlineY = y0; scanlineY <=y1; scanlineY++)
		  	  {
			  	  
			  	  Line(strt_a,scanlineY, strt_c, scanlineY,color);
			  	  //  Line(curx1,scanlineY, curx2, scanlineY,color);

			  	  strt_a += slope_A;
			  	  strt_c += slope_C;
		  	  }
	  	  }
					
				
		  
	  if(y2 >y1) {
			
	  for (int scanlineY = y2; scanlineY >=y1; scanlineY--)
	  {
		  
		  Line(end_c,scanlineY, end_b, scanlineY,color);
		  //  Line(curx1,scanlineY, curx2, scanlineY,color);

		  end_c -= slope_C;
		  end_b -= slope_B;
	  }
		  	  }

				
				if (y1>y2)
				{
	  for (int scanlineY = y1; scanlineY >=y2; scanlineY--)
	  {
		  
		  Line(end_a,scanlineY, start_b, scanlineY,color);
		  //  Line(curx1,scanlineY, curx2, scanlineY,color);

		  end_a -= slope_A;
		  start_b -= slope_B;
	  }
		 
				}

	
	  }
  	
