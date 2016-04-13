package chess.figure;

import chess.Position;

public class Elephant implements ChessInterface {
        public Position start;
        public Position finish;
        public boolean step(Position start,Position finish) {
                        if((Math.abs(this.start.i - this.finish.i) == Math.abs(this.start.j - this.finish.j))) {
                                return true;
                }
                else return false;
        }
        public Elephant(Position start,Position finish) {
                this.start = start;
                this.finish =finish;
        }

}

