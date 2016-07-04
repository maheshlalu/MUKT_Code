//
//  ProductsListViewController.h
//  OnGO
//
//  Created by krish on 18/05/14.
//  Copyright (c) 2014 Aryan Ghassemi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CCKFNavDrawer.h"
#import "MHTabBarController.h"

@interface CXAlbumVideoCollectionViewController : UICollectionViewController<CCKFNavDrawerDelegate,MHTabBarItemController>

@property(nonatomic,retain) NSMutableArray* videoList;
@property(nonatomic, strong) CCKFNavDrawer* navController;



@end
