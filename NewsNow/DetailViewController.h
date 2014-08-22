//
//  DetailViewController.h
//  NewsNow
//
//  Created by Chadwick Flores on 8/21/14.
//  Copyright (c) 2014 BuildRed. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
