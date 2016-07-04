//
//  ProductViewController.h
//  SlideMenu
//
//  Created by Mentor Insight India pvt Ltd on 21/02/14.
//  Copyright (c) 2014 Aryan Ghassemi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SlideNavigationController.h"
@interface ProductSubcategoryViewController : UIViewController<UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate,SlideNavigationControllerDelegate>{

    NSMutableArray *productsubCategoryArray;
    NSMutableArray* filtered;

}
@property (strong, nonatomic) IBOutlet UICollectionView *collectionView;
@end
