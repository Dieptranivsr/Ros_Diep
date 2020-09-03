----------------
# Initialization        :airplane:   :airplane:   :airplane:

### 1. Initializing the roscpp Node

In general, the form of ros::init() conforms to:

    void ros::init(<command line or remapping arguments>, std::string node_name, uint32_t options);
 
Before calling any other roscpp functions in a node you must call one of the ros::init() functions. The two most common init() invokations are:
    
    ros::init(argc, argv, "my_node_name");
    
and 
    
    ros::init(argc, argv, "my_node_name", ros::init_options::AnonymousName);


