class Ships {
		int width;
		int length;
		int boat;
		int count;
		Ships() {
				count = 0;
		}
		void boat_verify(Field field,int i,int j) {
                field.array[i][j] = 2;
                if( (j < field.n-1) && (field.array[i][j+1] == 1) ) {
                        ++boat;
                        ++length;
                        boat_verify(field,i,j+1);
                }
                if( (i < field.n-1) && (field.array[i+1][j] == 1) ) {
                        ++boat;
                        ++width;
                        boat_verify(field,i+1,j);
                }
                if( (j > 0) && (field.array[i][j-1] == 1) ) {
                        ++boat;
                        if(field.array[i-1][j-1] != 2) {
                                ++length;
                        }
                        boat_verify(field,i,j-1);
                }
                if( (i > 0) && (field.array[i-1][j] == 1) ) {
                        ++boat;
                        if(field.array[i-1][j+1] != 2) {
                                ++width;
                        }
                        boat_verify(field,i-1,j);
                }
        }
		public int countShips(Field field) {
				for(int i=0; i<field.n; ++i) {
						for(int j=0; j<field.n; ++j) {
								if(field.array[i][j] == 1) {
										width = 1;
										length = 1;
										boat = 1;
										boat_verify(field,i,j);
										if(width * length == boat) {
												++count;
										}
								}
						}
				}
				return count;
		}
}
