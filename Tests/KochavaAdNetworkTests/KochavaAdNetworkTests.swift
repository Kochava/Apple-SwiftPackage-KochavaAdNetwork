
import XCTest

@testable import KochavaAdNetwork



final class KochavaAdNetworkTests: XCTestCase
{
    
    
    
    func test_register()
    {
        KVALog.shared.level = .trace
        
        print("core=\(String(describing: KVACoreProduct.shared.kva_asForContextObject(withContext: .log) as? [AnyHashable: Any]))")
        
        KVAAdNetworkProduct.shared.register()
    }

    
    
    static var allTests =
    [
        ("test_register", test_register),
    ]
    
    
    
}



