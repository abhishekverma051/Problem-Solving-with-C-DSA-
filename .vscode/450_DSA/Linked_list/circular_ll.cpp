import java.util.*;

public
class Main
{
public
    static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int choice;
        VideoStore videoStore = new VideoStore();

        do
        {
            System.out.println();
            System.out.println();
            System.out.println("MAIN MENU \n=========");
            System.out.println("1. Add Videos:");
            System.out.println("2. Check Out Video:");
            System.out.println("3. Return Video:");
            System.out.println("4. Receive Rating:");
            System.out.println("5. List Inventory:");
            System.out.println("6. Exit:");
            System.out.print("Enter your choice: ");

            choice = input.nextInt();
            switch (choice)
            {
            case 1:
                System.out.println("Enter the name of the video you want to add: ");
                videoStore.addVideo(input.next());
                break;
            case 2:
                System.out.print("Enter the name of the video you want to check out: ");
                videoStore.doCheckout(input.next());
                break;
            case 3:
                System.out.print("Enter the name of the video you want to Return:");
                videoStore.doReturn(input.next());
                ;
                break;
            case 4:
                System.out.println("Enter the name of the video you want to Rate: ");
                videoStore.receiveRating(input.next(), input.nextInt());
                break;
            case 5:
                videoStore.listInventory();
                break;
            case 6:
                System.out.println("Enter ...!! Thanks for using the application");
                System.exit(1);
                break;
            }
        } while (!(choice == 6));
        input.close();
    }
}

class Video
{
public
    String videoName;
public
    boolean checkout;
public
    int rating;

public
    Video()
    {
    }

public
    Video(String name)
    {
        videoName = name;
    }

public
    void doCheckout()
    {
        System.out.println("Video " + '"' + getName() + '"' + " checked out successfully.");
    }

public
    void doReturn()
    {
        checkout = true;
        System.out.println("Video " + '"' + getName() + '"' + " returned successfully.");
    }

public
    void receiveRating(int rating)
    {
        this.rating = rating;
    }

public
    int getRating() { return rating; }
public
    String getName() { return videoName; }
public
    boolean getCheckout() { return checkout; }
}

class VideoStore
{
    Video[] store;

public
    VideoStore()
    {
        store = new Video[5];
    }

public
    void addVideo(String name)
    {
        store[0] = new Video(name);
        System.out.println("Video " + '"' + store[0].getName() + '"' + " added successfully");
    }

public
    void doCheckout(String name)
    {
        if (store[0].videoName.equals(name))
        {
            store[0].doCheckout();
        }
    }

public
    void doReturn(String name)
    {
        if (store[0].videoName.equals(name))
        {
            store[0].doReturn();
        }
    }

public
    void receiveRating(String name, int rating)
    {
        if (store[0].videoName.equals(name))
        {
            store[0].receiveRating(rating);
        }
        System.out.println("Rating " + '"' + store[0].getRating() + '"' + " has been mapped to the Video ''" + store[0].getName() + '"');
    }

public
    void listInventory()
    {
        System.out.println("------------------------------------------");
        System.out.println("Video Name | Checkout Status | Rating");
        System.out.println(store[0].getName() + "|" + store[0].getCheckout() + "|" + store[0].getRating());
        System.out.println("------------------------------------------");
    }
}
