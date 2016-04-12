class King implements ChessInterface {
        public Position start;
        public Position finish;
        public boolean step(Position start,Position finish) {
                        if(((this.start.i == this.finish.i) && (Math.abs(this.start.j - this.finish.j) == 1)) || ((this.start.j == this.finish.j) && (Math.abs(this.start.i - this.finish.i) == 1)) ||((Math.abs(this.start.i - this.finish.i) == Math.abs(this.start.j - this.finish.j) && (Math.abs(this.start.i - this.finish.i) == 1)))) {
                                return true;
                }
                else return false;
        }
        public King(Position start,Position finish) {
                this.start = start;
                this.finish =finish;
        }

}

