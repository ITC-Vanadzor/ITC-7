package am.itc7.entities.rectangle;
import am.itc7.utils.rectangleutils.*;
/**
 * Created by smb888 on 4/18/16.
 */
@ClassType(name = "Rectangle")
public class Rectangle {
    @FieldType(name = "length")
    private int length;
    @FieldType(name = "width",value = 15)
    private int width;
    @FieldType(name = "radius",value = 1)
    public int radius;

    @ConstructorType(fields = {
            @FieldType(name = "len",value = 1),
            @FieldType(name = "wid",value = 2)
    })
    public Rectangle() {}

    @MethodType(name = "getLength")
    public int getLength(){
        return length;
    }
    @MethodType(name = "setLength")
    public void setLength(int length){
        this.length = length;
    }
    @MethodType(name = "getWidth")
    public int getWidth(){
        return width;
    }
    @MethodType(name = "setWidth")
    public void setWidth(int width){
        this.width = width;
    }
}
