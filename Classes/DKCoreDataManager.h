#import <Foundation/Foundation.h>

#import <CoreData/CoreData.h>

@interface DKCoreDataManager : NSObject

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (DKCoreDataManager *) sharedManager;
- (void) saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
