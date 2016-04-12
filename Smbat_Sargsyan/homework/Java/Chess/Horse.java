class Horse implements ChessInterface {
        public Position start;
        public Position finish;
        public boolean step(Position start,Position finish) {
        	if((((this.start.i ==  this.finish.i + 2) || (this.start.i == this.finish.i - 2)) && ((this.start.j == this.finish.j + 1) || (this.start.j == this.finish.j - 1))) || (((this.start.i == this.finish.i + 1) || (this.start.i == this.finish.i - 1)) && ((this.start.j == this.finish.j + 2) || (this.start.j == this.finish.j - 2)))) {
			return true;
		}
		else return false;
	}
        public Horse(Position start,Position finish) {
                this.start = start;
                this.finish =finish;
        }
}

