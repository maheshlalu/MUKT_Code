//
//  FriendsViewController.h
//  SlideMenu
//
//  Created by Aryan Ghassemi on 12/31/13.
//  Copyright (c) 2013 Aryan Ghassemi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SlideNavigationController.h"

@interface ProductsViewController : UITableViewController <SlideNavigationControllerDelegate>{
    NSMutableArray *productCategoryArray;
    IBOutlet UITableView *productCattbl;
}

@end
