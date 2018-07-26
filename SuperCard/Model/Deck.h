//
//  Deck.h
//  Machismo
//
//  Created by 李键超 on 2018/7/3.
//  Copyright © 2018年 李键超. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

-(void)addCard:(Card *)card atTop:(BOOL)atTop;
-(void)addCard:(Card *)card;

-(Card *)drawRandomCard;

@end
