//
//  DetailViewController.h
//  CoreDataT
//
//  Created by Kishan on 11/02/15.
//  Copyright (c) 2015 Zensar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

